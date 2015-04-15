
@interface LKCGColorCodingProxy : CACodingProxy {

    ^{CGColor=} _color;
}

 - (void) dealloc;
 - (id) initWithObject:(id)a ;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (id) decodedObject;


@end
