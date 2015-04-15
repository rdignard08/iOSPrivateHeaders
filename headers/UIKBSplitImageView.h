
@interface UIKBSplitImageView : UIView {

    UIImageView _fullView;
    UIImageView _splitLeft;
    UIImageView _splitRight;
    NSString _currentFilterType;
}

 - (void) dealloc;
 - (void) setAlpha:(double)a;
 - (BOOL) _shouldInheritScreenScaleAsContentScaleFactor;
 - (id) filterType;
 - (void) setFilterType:(id)a;
 - (void) setImage:(id)asplitLeft:(id)bsplitRight:(id)ckeyplane:(id)d;
 - (void) insertSubviewAtBottom:(id)a;
 - (void) setImage:(id)acachedWidth:(double)bkeyplane:(id)c;
 - (void) clearImages;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
