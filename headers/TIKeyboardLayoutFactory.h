
@interface TIKeyboardLayoutFactory : NSObject {

    ^v _layoutsLibraryHandle;
    @"NSMutableDictionary" _internalCache;
}
@property (nonatomic, assign, readonly) NSNumber* layoutsLibraryHandle;
@property (atomic, retain, readwrite) NSMutableDictionary* internalCache;
 + (id) sharedKeyboardFactory;
 + (id) layoutsFileName;

 - (void) dealloc;
 - (id) keyboardWithName:(id)ainCache:(id)b;
 - (id) keyboardPrefixForWidth:(double)a;
 - (id) init;
 - (id) internalCache;
 - (void) setInternalCache:(id)a;
 - (^v) layoutsLibraryHandle;


@end
