# Branch Notes: stage

## Purpose
Integration area. Where experimental branches are merged to test compatibility before anything touches `main`.

## Scope
Acts as a controlled pre-production environment. All named feature branches must pass integration here before being considered for a `main` merge.

## Key Responsibilities
- Merging feature branches together and resolving conflicts
- Running the full build and simulation suite against all combined changes
- Validating that subsystems don't break each other post-merge
- Acting as the final human review gate before `main`

## Integration Order (recommended)
1. `init-build` (base)
2. `petruchio`, `manhattan`, `desdemona` (hardware safety stack)
3. `rosemary`, `paperclip`, `spitwire` (sensor and logging)
4. `RA9`, `red-summer` (autonomous and AI)
5. `overloade` (interface layer — always last)
