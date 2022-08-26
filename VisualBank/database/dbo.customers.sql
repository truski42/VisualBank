CREATE TABLE [dbo].[customers] (
    [Id]               INT             IDENTITY (1, 1) NOT NULL,
    [firstName]        VARCHAR (50)    NOT NULL,
    [lastName]         VARCHAR (50)    NOT NULL,
    [email]            VARCHAR (50)    NOT NULL,
    [password]         VARCHAR (MAX)   NOT NULL,
    [address]          VARCHAR (MAX)   NULL,
    [personalID]       VARCHAR (11)    NOT NULL,
    [accountNumber]    VARCHAR (9)     NOT NULL,
    [availableBalance] DECIMAL (18, 2) NULL,
    [soldo]            DECIMAL (18, 2) NULL,
    [interlocks]       DECIMAL (18, 2) NULL,
    PRIMARY KEY CLUSTERED ([Id] ASC),
    UNIQUE NONCLUSTERED ([personalID] ASC),
    UNIQUE NONCLUSTERED ([accountNumber] ASC),
    UNIQUE NONCLUSTERED ([personalID] ASC),
    UNIQUE NONCLUSTERED ([accountNumber] ASC)
);

