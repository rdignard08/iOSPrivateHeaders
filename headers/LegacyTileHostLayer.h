
@interface LegacyTileHostLayer : CALayer {

    ^{LegacyTileGrid=^{LegacyTileCache}{RetainPtr<CALayer>=^v}{IntPoint=ii}{IntSize=ii}f{HashMap<WebCore::IntPoint, WTF::RefPtr<WebCore::LegacyTileGridTile>, WTF::IntPointHash, WTF::HashTraits<WebCore::IntPoint>, WTF::HashTraits<WTF::RefPtr<WebCore::LegacyTileGridTile> > >={HashTable<WebCore::IntPoint, WTF::KeyValuePair<WebCore::IntPoint, WTF::RefPtr<WebCore::LegacyTileGridTile> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WebCore::IntPoint, WTF::RefPtr<WebCore::LegacyTileGridTile> > >, WTF::IntPointHash, WTF::HashMap<WebCore::IntPoint, WTF::RefPtr<WebCore::LegacyTileGridTile>, WTF::IntPointHash, WTF::HashTraits<WebCore::IntPoint>, WTF::HashTraits<WTF::RefPtr<WebCore::LegacyTileGridTile> > >::KeyValuePairTraits, WTF::HashTraits<WebCore::IntPoint> >=^{KeyValuePair<WebCore::IntPoint, WTF::RefPtr<WebCore::LegacyTileGridTile> >}iiii}}{IntRect={IntPoint=ii}{IntSize=ii}}} _tileGrid;
}

 - (id) actionForKey:(id)a ;
 - (void) renderInContext:(^{CGContext=})a ;
 - (id) initWithTileGrid:(^{LegacyTileGrid=^{LegacyTileCache}{RetainPtr<CALayer>=^v}{IntPoint=ii}{IntSize=ii}f{HashMap<WebCore::IntPoint, WTF::RefPtr<WebCore::LegacyTileGridTile>, WTF::IntPointHash, WTF::HashTraits<WebCore::IntPoint>, WTF::HashTraits<WTF::RefPtr<WebCore::LegacyTileGridTile> > >={HashTable<WebCore::IntPoint, WTF::KeyValuePair<WebCore::IntPoint, WTF::RefPtr<WebCore::LegacyTileGridTile> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WebCore::IntPoint, WTF::RefPtr<WebCore::LegacyTileGridTile> > >, WTF::IntPointHash, WTF::HashMap<WebCore::IntPoint, WTF::RefPtr<WebCore::LegacyTileGridTile>, WTF::IntPointHash, WTF::HashTraits<WebCore::IntPoint>, WTF::HashTraits<WTF::RefPtr<WebCore::LegacyTileGridTile> > >::KeyValuePairTraits, WTF::HashTraits<WebCore::IntPoint> >=^{KeyValuePair<WebCore::IntPoint, WTF::RefPtr<WebCore::LegacyTileGridTile> >}iiii}}{IntRect={IntPoint=ii}{IntSize=ii}}})a ;


@end
