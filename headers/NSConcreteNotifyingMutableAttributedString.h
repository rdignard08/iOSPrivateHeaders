
@interface NSConcreteNotifyingMutableAttributedString : NSConcreteMutableAttributedString {

    id _delegate;
}
 + (Class) _mutableStringClass;

 - (void) edited:(unsigned long long)a range:({_NSRange=QQ})b changeInLength:(long long)c ;
 - (void) beginEditing;
 - (void) endEditing;
 - (void) setDelegate:(id)a ;
 - (id) delegate;


@end
