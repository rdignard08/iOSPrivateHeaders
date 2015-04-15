
@interface DBGViewDebuggerSupport_iOS : NSObject {

}
 + (id) classMap;
 + (void) _snapshotView:(id)aandAddDataToDictionary:(id)b;
 + (id) _displayNameForView:(id)a;
 + (void) addPathForClass:(Class)a;
 + (void) _populateConstraintInfosArray:(id)aforViewHierarchy:(id)b;
 + (id) _collectViewInfo:(id)a;
 + (id) _layerInTree:(id)arepresentingView:(id)b;
 + (id) _collectSubviewInfoForView:(id)arepresentedLayer:(id)b;
 + (id) _layerInfo:(id)a;
 + (id) fetchViewHierarchy;
 + (id) _deepCopyLayer:(id)a;
 + (id) _primaryWindowFromWindows:(id)a;
 + (id) _snapshotMethodForView:(id)a;
 + (BOOL) _layerShouldSupersedeSnapshot:(id)a;
 + (id) _snapshotView:(id)aerrorString:(^@)b;
 + (void) _collectClassInfoForSubviews:(id)a;
 + (unsigned long long) majorVersion;
 + (unsigned long long) minorVersion;
 + (id) fetchViewHierarchyWithOptions:(id)a;
 + (void) enableLayersAsSnapshots;
 + (void) disableLayersAsSnapshots;



@end
