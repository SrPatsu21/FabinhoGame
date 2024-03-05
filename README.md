# FabinhoGame
[AbstractEntity]<-[AbstractLivingEntity]
[InterfaceCollectionable]<-[AbstractEntity]
[WorldMap]

//LivingEntity
[AbstractLivingEntity]<-[Animal]
[AbstractLivingEntity]<-[Mobs]
[AbstractLivingEntity]<-[Talktaive]
[AbstractLivingEntity]<-[AbstractCharacter]
[AbstractCharacter]<-[Hero]
[Mobs]<-[monster]

//itens
[InterfaceCollectionable]<-[AbstractItens]
[AbstractItens]<-[AbstractUsableItens]
[AbstractItens]<-[AbstractThrowableItens]
[AbstractEntity]<-[AbstractParticles]
[AbstractThrowableItens]<-[stone]
[AbstractUsableItens]<-[sword]
[AbstractUsableItens]<-[potion]
[AbstractUsableItens]<-[bow]
[AbstractItens]<-[arrow]

//attributs
[AbstractCharacter||+attack(); +defend()]
[AbstractLivingEntity|-life int; -streng: int; -damage: int|]
[AbstractUsableItens|-damage: int|+use(); +block()]
[InterfaceCollectionable||+take();+discard()]
[AbstractItens|taked: boolean|]
[monster||+attack()]
[AbstractThrowableItens||+thow()]
