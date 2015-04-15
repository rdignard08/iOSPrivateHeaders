
@interface _UISearchBarSearchFieldBackgroundView : _UITextFieldRoundedRectBackgroundViewNeue {

    BOOL _backgroundContainer;
    long long _barStyle;
    unsigned long long _searchBarStyle;
}

 - (void) setBarStyle:(long long)a;
 - (long long) barStyle;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})aactive:(BOOL)b;
 - (id) _strokeColor:(BOOL)a;
 - (id) _fillColor:(BOOL)a;
 - (void) updateView;
 - (void) setSearchBarStyle:(unsigned long long)a;
 - (void) setBackgroundContainer:(BOOL)a;
 - (unsigned long long) searchBarStyle;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})aactive:(BOOL)bupdateView:(BOOL)c;
 - (BOOL) backgroundContainer;


@end
