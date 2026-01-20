# Jaime's V2 BD‑X Style Body Covers Mod

![3D Model Overview](./3D%20Model.png)

Author: Jaime Machuca (jmachuca77)

## Purpose
This is an alternative set of v2 body/head cover parts for Olaf Robots intended to more closely match the Disney BD‑X aesthetic and surface "skin" lines.

## Important Note on Balance & RL Policy
These covers shift the overall mass distribution and do not perfectly match the original center of gravity assumptions used when training the current reinforcement learning (RL) locomotion policy. The existing policy still works, but may exhibit slightly reduced stability (e.g. more wobble, occasional recovery steps). Monitor performance; if instability becomes an issue, consider fine‑tuning or retraining with updated inertial parameters.

## Printing Guidance
The file `Bambu_X1C_Project_File.3mf` contains suggested part orientations, plate groupings, and baseline settings optimized for a Bambu Labs X1C printer.

Recommended starting points (adjust to your material):
- Material: PETG or PLA-CF (for durability)
- Layer Height: 0.20 mm (features) / 0.28 mm (large flat shells optional)
- Infill: 15–20% gyroid or cubic
- Walls: 3 perimeters for strength on structural covers
- Supports: Only where unavoidable (check project file flags)
- Adhesion: Skirt or minimal brim for tall narrow pieces

![Print Orientation Reference](./Print%20Orientation%20Reference.png)

## Included Parts
Representative filenames (see folder for full list):
- Front/Back/Side body covers (`Front Cover.3mf`, `Back Panel.3mf`, `trunk_*`) 
- Leg covers and cable guides (`Left Leg Cover.3mf`, `Right Leg Cover.3mf`, upper/lower guides) 
- Greebles & panels (`Front Greeble.3mf`, `Front Panel V4.3mf`) 
- Safety / accessory plates (`E-Stop Panel.3mf`, `E-Stop Adapter Plate.3mf`) 
- Assembly helpers (`Hip Cable Holder.3mf`, `Top Body Support.3mf`)

## Usage & Attribution
Feel free to remix or adapt. Please retain attribution to Jaime Machuca (jmachuca77) and reference that this mod targets a closer Disney BD‑X visual style.

## Future Suggestions
- Retrain or fine‑tune RL policy with updated CAD mass properties.

---
If you encounter issues or improved orientations, open a PR or add notes here.
