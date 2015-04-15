
@interface CUIMutableStructuredThemeStore : CUIStructuredThemeStore {

    NSString* _identifier;
    NSMutableDictionary* _memoryStore;
    NSMutableDictionary* _nameIdentifierStore;
    int _maxNameIdentifier;
}

 - (void) dealloc;
 - (id) initWithIdentifier:(id)a ;
 - (id) renditionWithKey:(r^{_renditionkeytoken=SS})a ;
 - (r^{_renditionkeytoken=SS}) renditionKeyForName:(id)a ;
 - (void) insertCGImage:(^{CGImage=})a withName:(id)b andDescription:(id)c ;
 - (void) removeImageNamed:(id)a withDescription:(id)b ;
 - (r^{_renditionkeyfmt=III[0I]}) keyFormat;
 - (BOOL) canGetRenditionWithKey:(r^{_renditionkeytoken=SS})a ;
 - (id) renditionWithKey:(r^{_renditionkeytoken=SS})a usingKeySignature:(id)b ;
 - (void) clearRenditionCache;
 - (long long) maximumRenditionKeyTokenCount;
 - (BOOL) usesCUISystemThemeRenditionKey;
 - (id) allImageNames;
 - (r^{_renditionkeytoken=SS}) renditionKeyForName:(id)a cursorHotSpot:(^{CGPoint=dd})b ;
 - (id) imagesWithName:(id)a ;
 - (BOOL) canGetRenditionWithKey:(r^{_renditionkeytoken=SS})a isFPO:(^B)b ;


@end
