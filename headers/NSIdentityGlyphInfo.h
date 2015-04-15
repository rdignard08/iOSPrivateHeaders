
@interface NSIdentityGlyphInfo : NSGlyphInfo {

    @"NSFont" _font;
    I _glyph;
}
 + (void) initialize;
 + (id) glyphInfoWithGlyph:(I)aforFont:(id)bbaseString:(id)c;

 - (id) description;
 - (void) dealloc;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (I) _glyphForFont:(id)abaseString:(id)b;
 - (id) initWithGlyph:(I)aforFont:(id)bbaseString:(id)c;
 - (id) _font;
 - (I) _glyph;


@end
