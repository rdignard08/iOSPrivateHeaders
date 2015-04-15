
@interface NSConcreteNotifyingMutableAttributedString : NSConcreteMutableAttributedString {

    id _delegate;
}
 + (Class) _mutableStringClass;

 - (void) edited:(Q)arange:({_NSRange=QQ})bchangeInLength:(q)c;
 - (void) beginEditing;
 - (void) endEditing;
 - (void) setDelegate:(id)a;
 - (id) delegate;


@end
