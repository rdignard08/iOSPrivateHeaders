
@interface UIKBSplitImageView : UIView {

    UIImageView* _fullView;
    UIImageView* _splitLeft;
    UIImageView* _splitRight;
    NSString* _currentFilterType;
}

 - (void) dealloc;
 - (void) setAlpha:(double)a ;
 - (BOOL) _shouldInheritScreenScaleAsContentScaleFactor;
 - (id) filterType;
 - (void) setFilterType:(id)a ;
 - (void) setImage:(id)a splitLeft:(id)b splitRight:(id)c keyplane:(id)d ;
 - (void) insertSubviewAtBottom:(id)a ;
 - (void) setImage:(id)a cachedWidth:(double)b keyplane:(id)c ;
 - (void) clearImages;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end
