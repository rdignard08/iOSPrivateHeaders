
@protocol NSCopying, UIDynamicItem;
@interface UICollectionViewLayoutAttributes : NSObject <NSCopying, UIDynamicItem> {

    NSString* _elementKind;
    NSString* _reuseIdentifier;
    {CGPoint="x"d"y"d} _center;
    {CGSize="width"d"height"d} _size;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _frame;
    double _alpha;
    {CATransform3D="m11"d"m12"d"m13"d"m14"d"m21"d"m22"d"m23"d"m24"d"m31"d"m32"d"m33"d"m34"d"m41"d"m42"d"m43"d"m44"d} _transform;
    NSIndexPath* _indexPath;
    NSString* _isCloneString;
    {?="isCellKind"b1"isDecorationView"b1"isHidden"b1"isClone"b1} _layoutFlags;
    long long _zIndex;
}
@property (nonatomic, assign, readwrite) NSNumber* frame;
@property (nonatomic, assign, readwrite) NSNumber* center;
@property (nonatomic, assign, readwrite) NSNumber* size;
@property (nonatomic, assign, readwrite) NSNumber* transform3D;
@property (nonatomic, assign, readwrite) NSNumber* bounds;
@property (nonatomic, assign, readwrite) NSNumber* transform;
@property (nonatomic, assign, readwrite) NSNumber* alpha;
@property (nonatomic, assign, readwrite) NSNumber* zIndex;
@property (nonatomic, assign, readwrite, getter=isHidden) NSNumber* hidden;
@property (nonatomic, retain, readwrite) NSIndexPath* indexPath;
@property (nonatomic, assign, readonly) NSNumber* representedElementCategory;
@property (nonatomic, assign, readonly) NSString* representedElementKind;
 + (id) layoutAttributesForSupplementaryViewOfKind:(id)awithIndexPath:(id)b;
 + (id) layoutAttributesForDecorationViewOfKind:(id)awithIndexPath:(id)b;
 + (id) layoutAttributesForCellWithIndexPath:(id)a;

 - ({CGSize=dd}) size;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) description;
 - (void) dealloc;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (void) setAlpha:(double)a ;
 - (unsigned long long) representedElementCategory;
 - (id) indexPath;
 - (void) setCenter:({CGPoint=dd})a ;
 - (id) _reuseIdentifier;
 - (id) _elementKind;
 - (BOOL) _isCell;
 - (BOOL) _isSupplementaryView;
 - (BOOL) _isClone;
 - ({CATransform3D=dddddddddddddddd}) transform3D;
 - (long long) zIndex;
 - (BOOL) _isDecorationView;
 - (BOOL) _isEquivalentTo:(id)a ;
 - (BOOL) _isTransitionVisibleTo:(id)a ;
 - (void) setIndexPath:(id)a ;
 - (void) _setReuseIdentifier:(id)a ;
 - (void) setTransform3D:({CATransform3D=dddddddddddddddd})a ;
 - (void) _setIsClone:(BOOL)a ;
 - (void) _setElementKind:(id)a ;
 - (id) initialLayoutAttributesForInsertedDecorationElementOfKind:(id)a atIndexPath:(id)b ;
 - (id) representedElementKind;
 - (void) setZIndex:(long long)a ;
 - (id) init;
 - (void) setSize:({CGSize=dd})a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) frame;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (double) alpha;
 - ({CGPoint=dd}) center;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) bounds;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - ({CGAffineTransform=dddddd}) transform;
 - (void) setTransform:({CGAffineTransform=dddddd})a ;
 - (BOOL) isHidden;
 - (void) setHidden:(BOOL)a ;


@end
