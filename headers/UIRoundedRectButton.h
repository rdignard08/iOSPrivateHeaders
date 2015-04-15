
@interface UIRoundedRectButton : UIButton {

    UIBezierPath* _fillPath;
    UIColor* _fillColor;
    UIGroupTableViewCellBackground* _tableViewStyleBackground;
    UIView* _shadowView;
}

 - (void) dealloc;
 - (void) _populateArchivedSubviews:(id)a ;
 - ({CGSize=dd}) _intrinsicSizeWithinSize:({CGSize=dd})a ;
 - (id) _backgroundView;
 - (BOOL) _canDrawContent;
 - (void) setTintColor:(id)a ;
 - (void) setHighlighted:(BOOL)a ;
 - (void) _updateState;
 - (id) _contentBackgroundColor;
 - (long long) buttonType;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a fillColor:(id)b ;
 - (void) _commonRoundedRectButtonInit;
 - (BOOL) _wantsTableViewStyleBackground;
 - (id) _setupBackgroundView;
 - (void) _invalidatePaths;
 - (void) _invalidateBackingViews;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end
