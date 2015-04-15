
@interface _UITraitBasedAppearance : _UIAppearance {

    @"UITraitCollection" _traitCollection;
}
 + (id) _appearanceForTraitCollection:(id)aforClass:(Class)bwithContainerList:(id)c;
 + (BOOL) _hasAnyCustomizations;
 + (BOOL) _hasCustomizationsForTraitCollection:(id)aclass:(Class)bguideClass:(Class)c;
 + (void) _setHasAnyCustomizations;

 - (void) dealloc;
 - (id) _traitCollection;
 - (BOOL) _isValidAppearanceForCustomizableObject:(id)a;
 - (void) _invalidateAppearanceInWindow:(id)a;


@end
