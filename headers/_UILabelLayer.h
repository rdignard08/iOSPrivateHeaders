
@interface _UILabelLayer : CALayer {

    _UILabelContentLayer* _contentLayer;
    BOOL _contentInsetsValid;
    {UIEdgeInsets="top"d"left"d"bottom"d"right"d} _contentInsets;
}

 - (void) dealloc;
 - (void) invalidateContentInsets;
 - (void) _updateContentLayer;
 - (void) updateContentInsets;
 - (void) updateContentLayerSize;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setNeedsDisplayInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) layoutSublayers;
 - (void) setMasksToBounds:(BOOL)a;


@end
