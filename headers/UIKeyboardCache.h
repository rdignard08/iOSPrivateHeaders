
@interface UIKeyboardCache : NSObject {

    @"CPBitmapStore" _store;
    @"NSSet" _layouts;
    BOOL _isCommitting;
}
 + (id) sharedInstance;
 + (BOOL) enabled;

 - (void) dealloc;
 - (void) commitTransaction;
 - (void) clearNonPersistentCache;
 - (void) updateCacheForInputModes:(id)a;
 - (id) displayImagesForView:(id)afromLayout:(id)bimageFlags:(id)c;
 - (^{CGImage=}) cachedCompositeImageForCacheKeys:(id)afromLayout:(id)bopacities:(id)c;
 - (^{CGImage=}) cachedImageForKey:(id)afromLayout:(id)b;
 - (void) displayView:(id)aimageWidth:(d)bfromLayout:(id)c;
 - (id) uniqueLayoutsFromInputModes:(id)a;
 - (void) displayView:(id)afromLayout:(id)b;
 - (id) init;


@end
