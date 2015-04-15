
@interface CUIMutableCatalog : CUICatalog {

    b1 _checkRespondsTo;
    b1 _respondsToCheck;
}

 - (void) dealloc;
 - (id) initWithName:(id)a;
 - (void) removeImageNamed:(id)ascale:(d)bidiom:(q)csubtype:(q)d;
 - (id) init;
 - (void) insertCGImage:(^{CGImage=})awithName:(id)bandDescription:(id)c;
 - (void) removeImageNamed:(id)awithDescription:(id)b;
 - (id) initWithName:(id)afromBundle:(id)berror:(^@)c;
 - (id) _baseKeyForName:(id)a;
 - (void) insertCGImage:(^{CGImage=})aname:(id)bscale:(d)cidiom:(q)dsubtype:(q)e;


@end
