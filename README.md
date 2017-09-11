This Jenerate package is a collection of modules that can be used for managing
exportable configuration for a Drupal 7 site.

Contents
--------

- jenerate_views: Views exports.
- jenerate_panels: Panels pages & handlers & minis.
- jenerate_images: Image styles.
- jenerate_dates: Date formats.
- jenerate_modes: Entity view modes.

Installation
------------

* Copy the modules contained within the `jenerate` directory here onto your own
  site, probably in the `sites/all/modules/custom` directory, or similar.
* Enable the modules as usual.
* Once enabled, you should see examples of the exportables. These should be
  removed or replaced as needed.

Maintenance
-----------

* Over time, you will build your own views, panels, image styles, etc. As these
  things are created, export them to code, and place them into these modules.
* Commit the changes.
* Deploy the changes.
* Clear caches on the destination site.
