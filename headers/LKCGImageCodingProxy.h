
@interface LKCGImageCodingProxy : CACodingProxy {

    ^{CGImage=} _image;
}

 - (void) dealloc;
 - (id) initWithObject:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) decodedObject;


@end
