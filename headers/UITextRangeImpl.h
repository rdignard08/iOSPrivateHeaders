
@interface UITextRangeImpl : UITextRange {

    @"DOMRange" _domRange;
    q _affinityIfCollapsed;
}
 + (id) wrapDOMRange:(id)awithAffinity:(q)b;
 + (id) wrapDOMRange:(id)a;

 - (id) description;
 - (void) dealloc;
 - (BOOL) isEmpty;
 - (BOOL) isEqual:(id)a;
 - (id) end;
 - (q) affinity;
 - (id) domRange;
 - (void) setDomRange:(id)a;
 - (void) setAffinity:(q)a;
 - (void) adjustAffinityOfPosition:(id)aisStart:(BOOL)b;
 - (id) start;


@end
