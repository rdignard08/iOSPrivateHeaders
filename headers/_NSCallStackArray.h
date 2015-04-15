
@interface _NSCallStackArray : NSArray {

    ^^v _frames;
    Q _cnt;
    Q _ignore;
    ^* _pcstrs;
    BOOL _wantSyms;
}
 + (id) arrayWithFrames:(^^v)acount:(Q)bsymbols:(BOOL)c;

 - (void) dealloc;
 - (void) finalize;
 - (Q) count;
 - (id) objectAtIndex:(Q)a;
 - (id) descriptionWithLocale:(id)aindent:(Q)b;


@end
