
@interface _NSCallStackArray : NSArray {

    ^^v _frames;
    unsigned long long _cnt;
    unsigned long long _ignore;
    ^* _pcstrs;
    BOOL _wantSyms;
}
 + (id) arrayWithFrames:(^^v)acount:(unsigned long long)bsymbols:(BOOL)c;

 - (void) dealloc;
 - (void) finalize;
 - (unsigned long long) count;
 - (id) objectAtIndex:(unsigned long long)a;
 - (id) descriptionWithLocale:(id)aindent:(unsigned long long)b;


@end
