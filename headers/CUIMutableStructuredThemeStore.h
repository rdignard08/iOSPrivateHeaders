
@interface CUIMutableStructuredThemeStore : CUIStructuredThemeStore {

    NSString _identifier;
    NSMutableDictionary _memoryStore;
    NSMutableDictionary _nameIdentifierStore;
    int _maxNameIdentifier;
}

 - (void) dealloc;
 - (id) initWithIdentifier:(id)a;
 - (id) renditionWithKey:(r^{_renditionkeytoken=SS})a;
 - (r^{_renditionkeytoken=SS}) renditionKeyForName:(id)a;
 - (void) insertCGImage:(^{CGImage=})awithName:(id)bandDescription:(id)c;
 - (void) removeImageNamed:(id)awithDescription:(id)b;
 - (r^{_renditionkeyfmt=III[0I]}) keyFormat;
 - (BOOL) canGetRenditionWithKey:(r^{_renditionkeytoken=SS})a;
 - (id) renditionWithKey:(r^{_renditionkeytoken=SS})ausingKeySignature:(id)b;
 - (void) clearRenditionCache;
 - (long long) maximumRenditionKeyTokenCount;
 - (BOOL) usesCUISystemThemeRenditionKey;
 - (id) allImageNames;
 - (r^{_renditionkeytoken=SS}) renditionKeyForName:(id)acursorHotSpot:(^{CGPoint=dd})b;
 - (id) imagesWithName:(id)a;
 - (BOOL) canGetRenditionWithKey:(r^{_renditionkeytoken=SS})aisFPO:(^B)b;


@end
