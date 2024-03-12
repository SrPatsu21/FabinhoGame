[<<Abstract>>AbstractEntity]<-[<<Abstract>>AbstractLivingEntity]
[WorldMap]

//LivingEntity
[<<Abstract>>AbstractLivingEntity]<-[<<Abstract>>Animal]
[<<Abstract>>AbstractLivingEntity]<-[<<Abstract>>Mobs]
[<<Abstract>>AbstractLivingEntity]<-[<<Abstract>>Talktaive]
[<<Abstract>>AbstractLivingEntity]<-[<<Abstract>>AbstractCharacter]
[<<Abstract>>AbstractCharacter]<-[Hero]
[<<Abstract>>Mobs]<-[monster]

//itens
[<<Interface>>InterfaceCollectionable]<-[<<Abstract>>AbstractItens]
[<<Abstract>>AbstractItens]<-[<<Abstract>>AbstractUsableItens]
[<<Abstract>>AbstractItens]<-[<<Abstract>>AbstractThrowableItens]
[<<Abstract>>AbstractEntity]<-[AbstractParticles]
[<<Abstract>>AbstractThrowableItens]<-[stone]
[<<Abstract>>AbstractUsableItens]<-[sword]
[<<Abstract>>AbstractUsableItens]<-[potion]
[<<Abstract>>AbstractUsableItens]<-[bow]
[<<Abstract>>AbstractItens]<-[arrow]

//attributs
[<<Abstract>>AbstractCharacter||+attack(); +defend()]
[<<Abstract>>AbstractLivingEntity|-life: int; -damage: int|]
[<<Abstract>>AbstractUsableItens|-damage: int|+use(); +block()]
[<<Interface>>Collectionable||+take();+discard()]
[<<Abstract>>AbstractItens|taked: boolean|]
[monster||+attack()]
[<<Abstract>>AbstractThrowableItens||+thow()]