
@interface CUIMutableCatalog : CUICatalog {

    b1 _checkRespondsTo;
    b1 _respondsToCheck;
}

 - (void) dealloc;
 - (id) initWithName:(id)a ;
 - (void) removeImageNamed:(id)a scale:(double)b idiom:(long long)c subtype:(long long)d ;
 - (id) init;
 - (void) insertCGImage:(^{CGImage=})a withName:(id)b andDescription:(id)c ;
 - (void) removeImageNamed:(id)a withDescription:(id)b ;
 - (id) initWithName:(id)a fromBundle:(id)b error:(^@)c ;
 - (id) _baseKeyForName:(id)a ;
 - (void) insertCGImage:(^{CGImage=})a name:(id)b scale:(double)c idiom:(long long)d subtype:(long long)e ;


@end
