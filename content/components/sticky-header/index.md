---
title: "Sticky header"
description: "Sticky content will stay positioned once the user scrolls past it."
tags: ["navigation"]
resources:
- src: '*/'
  name: folder-:counter
---
Sticky content is one that will stay positioned once the user scrolls past it (i.e: stuck in position). Unlike `position: fixed;`, sticky content is limited by its container and will stop scrolling once the end of the parent element is reached.

To make an element sticky, you need to add the following CSS:

`position: sticky;`
`top: 0;`
