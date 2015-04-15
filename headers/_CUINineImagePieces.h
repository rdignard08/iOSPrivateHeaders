
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
 - (id) initWithCenter:(id)a topLeft:(id)b top:(id)c topRight:(id)d right:(id)e bottomRight:(id)f bottom:(id)g bottomLeft:(id)h left:(id)i tileCenterAndEdges:(BOOL)j ;
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
