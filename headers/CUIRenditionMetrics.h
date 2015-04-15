
@interface CUIRenditionMetrics : NSObject {

    {CGSize="width"d"height"d} _imageSize;
    {CGSize="width"d"height"d} _edgeBottomLeftMargin;
    {CGSize="width"d"height"d} _edgeTopRightMargin;
    {CGSize="width"d"height"d} _contentBottomLeftMargin;
    {CGSize="width"d"height"d} _contentTopRightMargin;
    double _baseline;
    double _scale;
    {crmFlags="scalesVertically"b1"scalesHorizontally"b1"reserved"b14} _crmFlags;
}

 - (double) scale;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) contentRect;
 - ({CGSize=dd}) imageSize;
 - (id) initWithImageSize:({CGSize=dd})aedgeBottomLeft:({CGSize=dd})bedgeTopRight:({CGSize=dd})ccontentBottomLeft:({CGSize=dd})dcontentTopRight:({CGSize=dd})ebaseline:(double)fscalesVertically:(BOOL)gscalesHorizontally:(BOOL)hscale:(double)i;
 - ({CGSize=dd}) edgeBottomLeftMargin;
 - ({CGSize=dd}) edgeTopRightMargin;
 - ({CGSize=dd}) contentBottomLeftMargin;
 - ({CGSize=dd}) contentTopRightMargin;
 - (double) baseline;
 - (BOOL) scalesVertically;
 - (BOOL) scalesHorizontally;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) edgeRect;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) insetRectWithMetrics:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) insetContentRectWithMetrics:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (BOOL) hasOpaqueContentBounds;
 - (BOOL) hasAlignmentEdgeMargins;


@end
