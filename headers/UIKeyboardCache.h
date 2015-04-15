
@interface UIKeyboardCache : NSObject {

    CPBitmapStore* _store;
    NSSet* _layouts;
    BOOL _isCommitting;
}
 + (id) sharedInstance;
 + (BOOL) enabled;

 - (void) dealloc;
 - (void) commitTransaction;
 - (void) clearNonPersistentCache;
 - (void) updateCacheForInputModes:(id)a ;
 - (id) displayImagesForView:(id)a fromLayout:(id)b imageFlags:(id)c ;
 - (^{CGImage=}) cachedCompositeImageForCacheKeys:(id)a fromLayout:(id)b opacities:(id)c ;
 - (^{CGImage=}) cachedImageForKey:(id)a fromLayout:(id)b ;
 - (void) displayView:(id)a imageWidth:(double)b fromLayout:(id)c ;
 - (id) uniqueLayoutsFromInputModes:(id)a ;
 - (void) displayView:(id)a fromLayout:(id)b ;
 - (id) init;


@end
