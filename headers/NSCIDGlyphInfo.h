
@interface NSCIDGlyphInfo : NSGlyphInfo {

    S _cid;
    Q _collection;
}
 + (void) initialize;
 + (id) glyphInfoWithCharacterIdentifier:(Q)acollection:(Q)bbaseString:(id)c;

 - (id) description;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (I) _glyphForFont:(id)abaseString:(id)b;
 - (id) initWithCharacterIdentifier:(Q)acollection:(Q)bbaseString:(id)c;
 - (Q) characterIdentifier;
 - (Q) characterCollection;


@end
