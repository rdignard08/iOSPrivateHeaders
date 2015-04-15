
@interface CUIRenditionMetrics : NSObject {

    {CGSize="width"d"height"d} _imageSize;
    {CGSize="width"d"height"d} _edgeBottomLeftMargin;
    {CGSize="width"d"height"d} _edgeTopRightMargin;
    {CGSize="width"d"height"d} _contentBottomLeftMargin;
    {CGSize="width"d"height"d} _contentTopRightMargin;
    d _baseline;
    d _scale;
    {crmFlags="scalesVertically"b1"scalesHorizontally"b1"reserved"b14} _crmFlags;
}

 - (d) scale;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) contentRect;
 - ({CGSize=dd}) imageSize;
 - (id) initWithImageSize:({CGSize=dd})aedgeBottomLeft:({CGSize=dd})bedgeTopRight:({CGSize=dd})ccontentBottomLeft:({CGSize=dd})dcontentTopRight:({CGSize=dd})ebaseline:(d)fscalesVertically:(BOOL)gscalesHorizontally:(BOOL)hscale:(d)i;
 - ({CGSize=dd}) edgeBottomLeftMargin;
 - ({CGSize=dd}) edgeTopRightMargin;
 - ({CGSize=dd}) contentBottomLeftMargin;
 - ({CGSize=dd}) contentTopRightMargin;
 - (d) baseline;
 - (BOOL) scalesVertically;
 - (BOOL) scalesHorizontally;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) edgeRect;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) insetRectWithMetrics:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) insetContentRectWithMetrics:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (BOOL) hasOpaqueContentBounds;
 - (BOOL) hasAlignmentEdgeMargins;


@end
