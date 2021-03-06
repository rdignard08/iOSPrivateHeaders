
@interface _UIFlowLayoutSection : NSObject {

    NSMutableArray* _items;
    NSMutableArray* _rows;
    {UIEdgeInsets="top"d"left"d"bottom"d"right"d} _sectionMargins;
    double _verticalInterstice;
    double _horizontalInterstice;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _headerFrame;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _footerFrame;
    double _headerDimension;
    double _footerDimension;
    _UIFlowLayoutInfo* _layoutInfo;
    BOOL _isValid;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _frame;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _validRect;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _rectToKeepValid;
    {_NSRange="location"Q"length"Q} _validItemRange;
    NSMutableSet* _invalidatedIndexPaths;
    {?="commonRowHorizontalAlignment"i"lastRowHorizontalAlignment"i"rowVerticalAlignment"i} _rowAlignmentOptions;
    BOOL _fixedItemSize;
    {CGSize="width"d"height"d} _itemSize;
    double _otherMargin;
    double _beginMargin;
    double _endMargin;
    double _actualGap;
    double _lastRowBeginMargin;
    double _lastRowEndMargin;
    double _lastRowActualGap;
    BOOL _lastRowIncomplete;
    long long _itemsCount;
    long long _itemsByRowCount;
    long long _indexOfIncompleteRow;
}
@property (nonatomic, assign, readonly) NSMutableArray* items;
@property (nonatomic, assign, readonly) NSMutableArray* rows;
@property (nonatomic, assign, readwrite) NSNumber* verticalInterstice;
@property (nonatomic, assign, readwrite) NSNumber* horizontalInterstice;
@property (nonatomic, assign, readwrite) NSNumber* sectionMargins;
@property (nonatomic, assign, readwrite) NSNumber* frame;
@property (nonatomic, assign, readwrite) NSNumber* headerFrame;
@property (nonatomic, assign, readwrite) NSNumber* footerFrame;
@property (nonatomic, assign, readonly) NSNumber* headerDimension;
@property (nonatomic, assign, readonly) NSNumber* footerDimension;
@property (nonatomic, assign, readwrite) _UIFlowLayoutInfo* layoutInfo;
@property (nonatomic, assign, readwrite) NSNumber* rowAlignmentOptions;
@property (nonatomic, assign, readwrite) NSNumber* fixedItemSize;
@property (nonatomic, assign, readwrite) NSNumber* itemSize;
@property (nonatomic, assign, readonly) NSNumber* otherMargin;
@property (nonatomic, assign, readonly) NSNumber* beginMargin;
@property (nonatomic, assign, readonly) NSNumber* endMargin;
@property (nonatomic, assign, readonly) NSNumber* actualGap;
@property (nonatomic, assign, readonly) NSNumber* lastRowBeginMargin;
@property (nonatomic, assign, readonly) NSNumber* lastRowEndMargin;
@property (nonatomic, assign, readonly) NSNumber* lastRowActualGap;
@property (nonatomic, assign, readonly) NSNumber* lastRowIncomplete;
@property (nonatomic, assign, readwrite) NSNumber* itemsCount;
@property (nonatomic, assign, readonly) NSNumber* itemsByRowCount;
@property (nonatomic, assign, readonly) NSNumber* indexOfIncompleteRow;
@property (nonatomic, assign, readonly) NSNumber* validItemRange;
@property (nonatomic, assign, readonly) NSArray* invalidatedIndexPaths;

 - (void) dealloc;
 - (void) invalidate;
 - (void) setItemSize:({CGSize=dd})a ;
 - (id) snapshot;
 - (id) items;
 - (id) rows;
 - (double) headerDimension;
 - (double) footerDimension;
 - (BOOL) fixedItemSize;
 - (long long) itemsByRowCount;
 - ({CGSize=dd}) itemSize;
 - ({?=iii}) rowAlignmentOptions;
 - (BOOL) lastRowIncomplete;
 - (long long) indexOfIncompleteRow;
 - (double) lastRowBeginMargin;
 - (double) lastRowActualGap;
 - (double) beginMargin;
 - (double) actualGap;
 - (double) otherMargin;
 - (double) verticalInterstice;
 - (void) setSize:({CGSize=dd})a forItemAtIndexPath:(id)b ;
 - (id) invalidatedIndexPaths;
 - (long long) itemsCount;
 - (id) layoutInfo;
 - (double) endMargin;
 - ({_NSRange=QQ}) validItemRange;
 - (void) setItemsCount:(long long)a ;
 - (id) addItem;
 - (void) setFixedItemSize:(BOOL)a ;
 - (void) setSectionMargins:({UIEdgeInsets=dddd})a ;
 - (void) setHorizontalInterstice:(double)a ;
 - (void) setVerticalInterstice:(double)a ;
 - (void) setRowAlignmentOptions:({?=iii})a ;
 - (void) setHeaderDimension:(double)a forSection:(long long)b ;
 - (void) setFooterDimension:(double)a forSection:(long long)b ;
 - (void) updateEstimatedSizeForSection:(long long)a ;
 - (void) computeLayoutInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a forSection:(long long)b invalidating:(BOOL)c ;
 - (void) computeLayout;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) frameForItemAtIndexPath:(id)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) headerFrame;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) footerFrame;
 - ({UIEdgeInsets=dddd}) sectionMargins;
 - (id) addRowAtEnd:(BOOL)a ;
 - (void) setEstimatedSize:({CGSize=dd})a forSection:(long long)b ;
 - (void) sizeChangedForItem:(id)a atIndexPath:(id)b inRow:(id)c ;
 - (long long) estimatedIndexOfItemAtPoint:({CGPoint=dd})a ;
 - (void) logInvalidSizes;
 - (void) setLayoutInfo:(id)a ;
 - (void) addInvalidatedIndexPath:(id)a ;
 - (id) copyFromLayoutInfo:(id)a ;
 - (id) rowsInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (double) horizontalInterstice;
 - (void) setHeaderFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setFooterFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (double) lastRowEndMargin;
 - (id) init;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) frame;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end
