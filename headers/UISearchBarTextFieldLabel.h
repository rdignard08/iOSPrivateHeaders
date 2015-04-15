
@interface UISearchBarTextFieldLabel : UITextFieldLabel {

    BOOL _ignoresGeometryChanges;
}
 + (id) _defaultAttributes;

 - (BOOL) ignoresGeometryChanges;
 - (void) setIgnoresGeometryChanges:(BOOL)a ;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end
