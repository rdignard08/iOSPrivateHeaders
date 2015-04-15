
@interface _UIFlowLayoutInfo : NSObject {

    NSMutableArray _sections;
    BOOL _useFloatingHeaderFooter;
    BOOL _horizontal;
    BOOL _leftToRight;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _visibleBounds;
    {CGSize="width"d"height"d} _layoutSize;
    double _dimension;
    BOOL _isValid;
    {?="commonRowHorizontalAlignment"i"lastRowHorizontalAlignment"i"rowVerticalAlignment"i} _rowAlignmentOptions;
    UICollectionViewFlowLayout _layout;
    BOOL _usesFloatingHeaderFooter;
    BOOL _estimatesSizes;
    {CGSize="width"d"height"d} _contentSize;
}
@property (nonatomic, assign, readonly) NSMutableArray* sections;
@property (nonatomic, assign, readwrite) NSNumber* usesFloatingHeaderFooter;
@property (nonatomic, assign, readwrite) NSNumber* dimension;
@property (nonatomic, assign, readwrite) NSNumber* horizontal;
@property (nonatomic, assign, readwrite) NSNumber* leftToRight;
@property (nonatomic, assign, readwrite) NSNumber* contentSize;
@property (nonatomic, assign, readwrite) NSNumber* rowAlignmentOptions;
@property (nonatomic, assign, readwrite) UICollectionViewFlowLayout* layout;
@property (nonatomic, assign, readwrite) NSNumber* estimatesSizes;
@property (nonatomic, assign, readonly) NSArray* invalidatedIndexPaths;

 - (void) dealloc;
 - (id) copy;
 - ({CGSize=dd}) contentSize;
 - (id) snapshot;
 - (void) setContentSize:({CGSize=dd})a;
 - (void) setHorizontal:(BOOL)a;
 - (id) sections;
 - (void) invalidate:(BOOL)a;
 - (BOOL) horizontal;
 - ({?=iii}) rowAlignmentOptions;
 - (void) setSize:({CGSize=dd})aforItemAtIndexPath:(id)b;
 - (id) invalidatedIndexPaths;
 - (double) dimension;
 - (id) addSection;
 - (void) setRowAlignmentOptions:({?=iii})a;
 - (void) setDimension:(double)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) frameForItemAtIndexPath:(id)a;
 - (void) didUpdateSizeForSection:(long long)awithDelta:(double)b;
 - (BOOL) usesFloatingHeaderFooter;
 - (void) setUsesFloatingHeaderFooter:(BOOL)a;
 - (BOOL) leftToRight;
 - (void) setLeftToRight:(BOOL)a;
 - (BOOL) estimatesSizes;
 - (void) setEstimatesSizes:(BOOL)a;
 - (id) init;
 - (id) layout;
 - (void) setLayout:(id)a;


@end
