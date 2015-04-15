
@interface UITextRangeImpl : UITextRange {

    DOMRange* _domRange;
    long long _affinityIfCollapsed;
}
 + (id) wrapDOMRange:(id)awithAffinity:(long long)b;
 + (id) wrapDOMRange:(id)a;

 - (id) description;
 - (void) dealloc;
 - (BOOL) isEmpty;
 - (BOOL) isEqual:(id)a;
 - (id) end;
 - (long long) affinity;
 - (id) domRange;
 - (void) setDomRange:(id)a;
 - (void) setAffinity:(long long)a;
 - (void) adjustAffinityOfPosition:(id)aisStart:(BOOL)b;
 - (id) start;


@end
