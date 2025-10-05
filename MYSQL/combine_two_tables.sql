
select Person.firstName,person.lastName,Address.state,Address.city from person left join address on person.personId = Address.personId;