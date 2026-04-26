# Branch Notes: docs

## Purpose
The central documentation tracking branch. Acts as the source of truth for all content living in `docs/global/`.

## Scope
This branch is not for robot code. Its sole purpose is to maintain and version the global shared documentation set. When global docs need updating, changes should be authored here and then merged or cherry-picked into other branches.

## Key Responsibilities
- Maintaining `docs/global/` as the authoritative source
- Reviewing and merging documentation PRs before distribution
- Tracking changes to styleguide, commit guide, deploy guide, and branch map

## Workflow
1. Edit files in `docs/global/` on this branch
2. Commit with a `docs:` prefix commit message
3. Sync changes to other branches using `git checkout docs -- docs/global/`
