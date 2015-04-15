
@interface NSGlyphNameGlyphInfo : NSIdentityGlyphInfo {

    NSString* _name;
}
 + (void) initialize;

 - (id) description;
 - (void) dealloc;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (id) initWithGlyphName:(id)a glyph:(unsigned int)b forFont:(id)c baseString:(id)d ;
 - (id) glyphName;


@end
