
@protocol NSCopying, NSCoding;
@interface NSGlyphInfo : NSObject <NSCopying, NSCoding> {

    NSString _baseString;
}
 + (BOOL) supportsSecureCoding;
 + (void) initialize;
 + (id) glyphInfoWithGlyph:(unsigned int)aforFont:(id)bbaseString:(id)c;
 + (id) glyphInfoWithCharacterIdentifier:(unsigned long long)acollection:(unsigned long long)bbaseString:(id)c;
 + (id) glyphInfoWithGlyphName:(id)aforFont:(id)bbaseString:(id)c;

 - (Class) classForKeyedArchiver;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (unsigned int) _glyphForFont:(id)abaseString:(id)b;
 - (id) initWithBaseString:(id)a;
 - (id) _baseString;
 - (unsigned long long) characterIdentifier;
 - (unsigned long long) characterCollection;
 - (id) glyphName;


@end
