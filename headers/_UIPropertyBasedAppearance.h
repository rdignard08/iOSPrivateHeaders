
@interface _UIPropertyBasedAppearance : _UIAppearance {

    NSDictionary* _propertiesToMatch;
}
 + (id) _appearanceMatchingProperties:(id)aforClass:(Class)bwithContainerList:(id)c;
 + (id) _appearanceObjectKeyForProperties:(id)a;

 - (void) dealloc;
 - (BOOL) _isValidAppearanceForCustomizableObject:(id)a;
 - (id) _propertiesToMatch;
 - (void) _setPropertiesToMatch:(id)a;


@end
