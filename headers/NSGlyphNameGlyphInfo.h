
@interface NSGlyphNameGlyphInfo : NSIdentityGlyphInfo {

    @"NSString" _name;
}
 + (void) initialize;

 - (id) description;
 - (void) dealloc;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) initWithGlyphName:(id)aglyph:(I)bforFont:(id)cbaseString:(id)d;
 - (id) glyphName;


@end
