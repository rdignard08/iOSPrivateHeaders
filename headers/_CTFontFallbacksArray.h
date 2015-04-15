
@interface _CTFontFallbacksArray : NSArray {

    int _lock;
    r^{TBaseFont=^^?i{TCFRef<const __CFData *>=^{__CFData}}{TCFRef<const __CFData *>=^{__CFData}}{TCFRef<const __CFData *>=^{__CFData}}{TCFRef<const __CFData *>=^{__CFData}}{TCFRef<const __CFData *>=^{__CFData}}{TCFRef<const __CFData *>=^{__CFData}}{TCFRef<const __CFData *>=^{__CFData}}{TCFRef<const __CFData *>=^{__CFData}}{TCFRef<const __CFURL *>=^{__CFURL}}i{TCFRef<__CFDictionary *>=^{__CFDictionary}}{TCFRef<const __CFArray *>=^{__CFArray}}{TCFRef<const __CFCharacterSet *>=^{__CFCharacterSet}}{TCFRef<const __CFArray *>=^{__CFArray}}{TCFRef<const __CFCharacterSet *>=^{__CFCharacterSet}}III{TCFRef<const __CFCharacterSet *>=^{__CFCharacterSet}}{TCFRef<const __CFData *>=^{__CFData}}q^{TBMPDataCache}^{unordered_map<unsigned short, unsigned short, std::__1::hash<unsigned short>, std::__1::equal_to<unsigned short>, std::__1::allocator<std::__1::pair<const unsigned short, unsigned short> > >}^{TTraitsValues}S^{UnscaledAdvancesPage}{StrikeMetrics=dddI{CGPoint=dd}{CGRect={CGPoint=dd}{CGSize=dd}}B}III{TMutex=@}{TInlineVector<TCFRef<const __CFData *>, 4>=^{TCFRef<const __CFData *>}^{TCFRef<const __CFData *>}{__compressed_pair<TCFRef<const __CFData *> *, TInlineBufferAllocator<TCFRef<const __CFData *>, 4> >=^{TCFRef<const __CFData *>}{TInlineBufferAllocator<TCFRef<const __CFData *>, 4>={type=[32C]}^{TCFRef<const __CFData *>}}}}{array<TCFRef<__CFDictionary *>, 7>=[7{TCFRef<__CFDictionary *>=^{__CFDictionary}}]}} _baseFont;
    unsigned long long _count;
    NSArray* _cascade;
    NSMutableArray* _fallbacks;
}

 - (void) dealloc;
 - (unsigned long long) count;
 - (id) objectAtIndex:(unsigned long long)a;
 - (unsigned long long) countByEnumeratingWithState:(^{?=Q^@^Q[5Q]})aobjects:(^@)bcount:(unsigned long long)c;
 - (id) initWithBaseFont:(r^{TBaseFont=^^?i{TCFRef<const __CFData *>=^{__CFData}}{TCFRef<const __CFData *>=^{__CFData}}{TCFRef<const __CFData *>=^{__CFData}}{TCFRef<const __CFData *>=^{__CFData}}{TCFRef<const __CFData *>=^{__CFData}}{TCFRef<const __CFData *>=^{__CFData}}{TCFRef<const __CFData *>=^{__CFData}}{TCFRef<const __CFData *>=^{__CFData}}{TCFRef<const __CFURL *>=^{__CFURL}}i{TCFRef<__CFDictionary *>=^{__CFDictionary}}{TCFRef<const __CFArray *>=^{__CFArray}}{TCFRef<const __CFCharacterSet *>=^{__CFCharacterSet}}{TCFRef<const __CFArray *>=^{__CFArray}}{TCFRef<const __CFCharacterSet *>=^{__CFCharacterSet}}III{TCFRef<const __CFCharacterSet *>=^{__CFCharacterSet}}{TCFRef<const __CFData *>=^{__CFData}}q^{TBMPDataCache}^{unordered_map<unsigned short, unsigned short, std::__1::hash<unsigned short>, std::__1::equal_to<unsigned short>, std::__1::allocator<std::__1::pair<const unsigned short, unsigned short> > >}^{TTraitsValues}S^{UnscaledAdvancesPage}{StrikeMetrics=dddI{CGPoint=dd}{CGRect={CGPoint=dd}{CGSize=dd}}B}III{TMutex=@}{TInlineVector<TCFRef<const __CFData *>, 4>=^{TCFRef<const __CFData *>}^{TCFRef<const __CFData *>}{__compressed_pair<TCFRef<const __CFData *> *, TInlineBufferAllocator<TCFRef<const __CFData *>, 4> >=^{TCFRef<const __CFData *>}{TInlineBufferAllocator<TCFRef<const __CFData *>, 4>={type=[32C]}^{TCFRef<const __CFData *>}}}}{array<TCFRef<__CFDictionary *>, 7>=[7{TCFRef<__CFDictionary *>=^{__CFDictionary}}]}})acascade:(id)b;


@end
