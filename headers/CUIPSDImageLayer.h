
@interface CUIPSDImageLayer : CUIPSDLayer {

    CUIImage* _image;
}

 - (void) dealloc;
 - (id) initWithCGImageRef:(^{CGImage=})a;
 - (^{CGImage=}) cgImageRef;


@end
