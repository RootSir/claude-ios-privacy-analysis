#!/usr/bin/env python3
"""Wrap a viz-fragment HTML report into a standalone themed HTML file."""
import sys, pathlib

fragment_path = pathlib.Path(sys.argv[1])
out_path = pathlib.Path(sys.argv[2])
frag = fragment_path.read_text(encoding="utf-8")

TEMPLATE = """<!doctype html>
<html lang="zh-CN">
<head>
<meta charset="utf-8">
<meta name="viewport" content="width=device-width, initial-scale=1">
<title>__TITLE__</title>
<style>
:root {
  --background: #f7f7f8; --foreground: #18181b;
  --card: #ffffff; --card-foreground: #18181b;
  --popover: #ffffff; --popover-foreground: #18181b;
  --primary: #18181b; --primary-foreground: #fafafa;
  --secondary: #f4f4f5; --secondary-foreground: #18181b;
  --muted: #f4f4f5; --muted-foreground: #71717a;
  --accent: #f4f4f5; --accent-foreground: #18181b;
  --destructive: #dc2626; --border: #e4e4e7; --input: #e4e4e7; --ring: #a1a1aa;
  --blue: #2563eb; --orange: #ea580c; --green: #16a34a; --red: #dc2626;
  --purple: #7c3aed; --yellow: #ca8a04;
  --font-size-base: 15px;
}
@media (prefers-color-scheme: dark) {
  :root {
    --background: #18181b; --foreground: #fafafa;
    --card: #27272a; --card-foreground: #fafafa;
    --popover: #27272a; --popover-foreground: #fafafa;
    --primary: #fafafa; --primary-foreground: #18181b;
    --secondary: #3f3f46; --secondary-foreground: #fafafa;
    --muted: #3f3f46; --muted-foreground: #a1a1aa;
    --accent: #3f3f46; --accent-foreground: #fafafa;
    --destructive: #ef4444; --border: #3f3f46; --input: #3f3f46; --ring: #52525b;
    --blue: #60a5fa; --orange: #fb923c; --green: #4ade80; --red: #f87171;
    --purple: #a78bfa; --yellow: #facc15;
  }
}
* { box-sizing: border-box; }
body {
  margin: 0; padding: 24px clamp(16px, 4vw, 48px) 64px;
  background: var(--background); color: var(--foreground);
  font-size: var(--font-size-base); line-height: 1.6;
  font-family: -apple-system, BlinkMacSystemFont, "Segoe UI", "PingFang SC",
    "Hiragino Sans GB", "Microsoft YaHei", sans-serif;
}
h1 { font-size: calc(var(--font-size-base) + 8px); margin: 0 0 8px; }
h2 { font-size: calc(var(--font-size-base) + 4px); margin: 8px 0; }
h3, h4 { font-size: calc(var(--font-size-base) + 1px); margin: 18px 0 8px; }
p { margin: 8px 0; }
ul, ol { margin: 8px 0; padding-left: 22px; }
li { margin: 4px 0; }
code {
  background: var(--muted); color: var(--card-foreground);
  border-radius: 4px; padding: 1px 5px;
  font-size: 0.85em; font-family: ui-monospace, SFMono-Regular, Menlo, monospace;
  word-break: break-all;
}
hr { border: 0; border-top: 1px solid var(--border); margin: 20px 0; }
dl { margin: 8px 0; }
.card {
  background: var(--card); color: var(--card-foreground);
  border: 1px solid var(--border); border-radius: 12px;
}
.card-body { padding: 14px 16px; }
.text-muted { color: var(--muted-foreground); }
.text-small { font-size: 13px; }
.text-end { text-align: right; }
.text-center { text-align: center; }
.text-nowrap { white-space: nowrap; }
.viz-grid { display: grid; gap: 12px; grid-template-columns: repeat(auto-fit, minmax(200px, 1fr)); }
.viz-stat-value { font-size: calc(var(--font-size-base) + 5px); font-weight: 500; line-height: 1.3; }
.nav-pills { display: flex; flex-wrap: wrap; gap: 6px; padding: 4px; background: var(--muted); border-radius: 10px; width: fit-content; max-width: 100%; }
.nav-link {
  appearance: none; border: 0; background: transparent; color: var(--muted-foreground);
  border-radius: 7px; padding: 5px 14px; font-size: 14px; cursor: pointer; font-family: inherit;
}
.nav-link.active { background: var(--card); color: var(--card-foreground); font-weight: 500; }
.nav-link:focus-visible { outline: 2px solid var(--ring); outline-offset: 1px; }
.table-responsive { overflow-x: auto; margin: 8px 0; }
.table { border-collapse: collapse; width: 100%; font-size: 14px; }
.table th { text-align: left; color: var(--muted-foreground); font-weight: 500; }
.table th, .table td { padding: 8px 10px; border-bottom: 1px solid var(--border); vertical-align: top; }
.table td code, .table th code { white-space: nowrap; }
</style>
</head>
<body>
__FRAGMENT__
<script>
(function () {
  var tabs = document.querySelectorAll('.nav-link[role="tab"]');
  tabs.forEach(function (t) {
    t.addEventListener('click', function () {
      tabs.forEach(function (x) {
        x.classList.remove('active');
        x.setAttribute('aria-selected', 'false');
        var p = document.getElementById(x.getAttribute('aria-controls'));
        if (p) p.hidden = true;
      });
      t.classList.add('active');
      t.setAttribute('aria-selected', 'true');
      var panel = document.getElementById(t.getAttribute('aria-controls'));
      if (panel) panel.hidden = false;
    });
  });
})();
</script>
</body>
</html>
"""

title = sys.argv[3] if len(sys.argv) > 3 else "Claude iOS App 逆向分析报告"
out_path.write_text(TEMPLATE.replace("__TITLE__", title).replace("__FRAGMENT__", frag), encoding="utf-8")
print(f"written {out_path} ({out_path.stat().st_size} bytes)")
