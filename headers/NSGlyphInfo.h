
@protocol NSCopying, NSCoding;
@interface NSGlyphInfo : NSObject <NSCopying, NSCoding> {

    @"NSString" _baseString;
}
 + (BOOL) supportsSecureCoding;
 + (void) initialize;
 + (id) glyphInfoWithGlyph:(I)aforFont:(id)bbaseString:(id)c;
 + (id) glyphInfoWithCharacterIdentifier:(Q)acollection:(Q)bbaseString:(id)c;
 + (id) glyphInfoWithGlyphName:(id)aforFont:(id)bbaseString:(id)c;

 - (Class) classForKeyedArchiver;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (I) _glyphForFont:(id)abaseString:(id)b;
 - (id) initWithBaseString:(id)a;
 - (id) _baseString;
 - (Q) characterIdentifier;
 - (Q) characterCollection;
 - (id) glyphName;


@end
