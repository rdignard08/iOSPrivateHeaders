
@interface NSConcreteNotifyingMutableAttributedString : NSConcreteMutableAttributedString {

    id _delegate;
}
 + (Class) _mutableStringClass;

 - (void) edited:(unsigned long long)arange:({_NSRange=QQ})bchangeInLength:(long long)c;
 - (void) beginEditing;
 - (void) endEditing;
 - (void) setDelegate:(id)a;
 - (id) delegate;


@end
