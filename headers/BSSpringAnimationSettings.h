
@interface BSSpringAnimationSettings : BSAnimationSettings {

    d _mass;
    d _stiffness;
    d _damping;
    d _epsilon;
    BOOL _hasCalculatedDuration;
}
 + (BOOL) supportsSecureCoding;
 + (id) settingsWithMass:(d)astiffness:(d)bdamping:(d)c;
 + (id) settingsWithMass:(d)astiffness:(d)bdamping:(d)cepsilon:(d)d;
 + (id) settingsWithMass:(d)astiffness:(d)bdamping:(d)ctimingFunction:(id)d;
 + (id) settingsWithMass:(d)astiffness:(d)bdamping:(d)cepsilon:(d)dtimingFunction:(id)e;
 + (id) settingsWithMass:(d)astiffness:(d)bdamping:(d)cepsilon:(d)ddelay:(d)etimingFunction:(id)f;

 - (d) duration;
 - (id) mutableCopyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (void) encodeWithXPCDictionary:(id)a;
 - (id) initWithXPCDictionary:(id)a;
 - (id) _initWithDuration:(d)adelay:(d)bframeInterval:(d)ctimingFunction:(id)d;
 - (BOOL) isSpringAnimation;
 - (void) _setDuration:(d)a;
 - (void) _setTimingFunction:(id)a;
 - (void) _setEpsilon:(d)a;
 - (id) _initWithMass:(d)astiffness:(d)bdamping:(d)cepsilon:(d)ddelay:(d)eframeInterval:(d)ftimingFunction:(id)g;
 - (d) stiffness;
 - (d) epsilon;
 - (BOOL) _hasCalculatedDuration;
 - (void) _setMass:(d)a;
 - (void) _setStiffness:(d)a;
 - (void) _setDamping:(d)a;
 - (d) mass;
 - (d) damping;


@end
