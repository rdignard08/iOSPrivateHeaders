
@interface NSCTGlyphInfo : NSGlyphInfo {

}

 - (id) retain;
 - (Vv) release;
 - (unsigned long long) retainCount;
 - (void) finalize;
 - (BOOL) retainWeakReference;
 - (BOOL) allowsWeakReference;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (unsigned long long) _cfTypeID;
 - (void) encodeWithCoder:(id)a;
 - (unsigned int) _glyphForFont:(id)abaseString:(id)b;
 - (id) _baseString;
 - (unsigned long long) characterIdentifier;
 - (unsigned long long) characterCollection;
 - (id) glyphName;


@end
