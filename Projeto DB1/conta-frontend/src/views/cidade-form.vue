<template>
    <div>
        <h1>Cadastro De Cidade</h1>

        <v-text-field label="Nome" v-model="cidade.nome"></v-text-field>
        <v-text-field label="Estado" v-model="cidade.estado"></v-text-field>

        <v-btn color="primary" @click="salvar">Salvar</v-btn>
        <v-btn color="error" @click="cancelar">cancelar</v-btn>
    </div>
</template>
<script lang="ts">
import { Vue, Component} from 'vue-property-decorator'
import axios from 'axios';
@Component
export default class CidadeForm extends Vue{

    cidade = {
        nome: '',
        estado: ''
    }

    salvar(){
        axios
        .post('/api/cidades', this.cidade)
        .then(response => {
            console.log(response);
            this.$router.push('/cidades');
        })
        .catch(error => console.log(error));
    }

    cancelar(){
        this.$router.push('/cidades');
    }
}
</script>
