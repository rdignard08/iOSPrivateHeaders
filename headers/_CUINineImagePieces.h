
@interface _CUINineImagePieces : NSObject {

    CUIImage* _center;
    CUIImage* _topLeft;
    CUIImage* _top;
    CUIImage* _topRight;
    CUIImage* _right;
    CUIImage* _bottomRight;
    CUIImage* _bottom;
    CUIImage* _bottomLeft;
    CUIImage* _left;
    BOOL _tileCenterAndEdges;
}

 - (void) dealloc;
 - (id) initWithCenter:(id)atopLeft:(id)btop:(id)ctopRight:(id)dright:(id)ebottomRight:(id)fbottom:(id)gbottomLeft:(id)hleft:(id)itileCenterAndEdges:(BOOL)j;
 - (id) center;
 - (id) topLeft;
 - (id) top;
 - (id) topRight;
 - (id) right;
 - (id) bottomRight;
 - (id) bottom;
 - (id) bottomLeft;
 - (id) left;
 - (BOOL) tileCenterAndEdges;


@end
